#include <fmt/format.h>
#include <sdbus-c++/sdbus-c++.h>

static constexpr char const *const DESTINATION = "ru.test.management";
static constexpr char const *const OBJECT_PATH = "/ru/test/management/converter";
static constexpr char const *const NAME_SIGNAL = "config_changed";
static constexpr char const *const INTERFACE_NAME = "ru.test.management.converter.modules";

int main() {
    ::fmt::print("Start prog\n");
    try {
        auto converter_signal_proxy = sdbus::createProxy(DESTINATION, OBJECT_PATH);
        converter_signal_proxy->uponSignal(NAME_SIGNAL).onInterface(INTERFACE_NAME)
                .call([]() {
                    ::fmt::print("Catch signal converter\n");
                });
        converter_signal_proxy->finishRegistration();

        sleep(15);
    } catch (std::exception const &ex) {
        ::fmt::print(stderr, "Exception: {}\n", ex.what());
        ::fmt::print(stderr, "End prog\n");
        return -1;
    }
    ::fmt::print("End prog\n");
    return 0;
}