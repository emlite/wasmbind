#include <webbind/ShowPopoverOptions.hpp>
#include <webbind/HTMLElement.hpp>

using emlite::Val;
namespace webbind {

ShowPopoverOptions::ShowPopoverOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ShowPopoverOptions ShowPopoverOptions::take_ownership(Handle h) noexcept {
        return ShowPopoverOptions(h);
    }
ShowPopoverOptions::ShowPopoverOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
ShowPopoverOptions::ShowPopoverOptions() noexcept: emlite::Val(emlite::Val::object()) {}
ShowPopoverOptions ShowPopoverOptions::clone() const noexcept { return *this; }

HTMLElement ShowPopoverOptions::source() const {
    return emlite::Val::get("source").as<HTMLElement>();
}

void ShowPopoverOptions::source(const HTMLElement& value) {
    emlite::Val::set("source", value);
}


} // namespace webbind