#include <webbind/ContentVisibilityAutoStateChangeEventInit.hpp>

using emlite::Val;
namespace webbind {

ContentVisibilityAutoStateChangeEventInit::ContentVisibilityAutoStateChangeEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
ContentVisibilityAutoStateChangeEventInit ContentVisibilityAutoStateChangeEventInit::take_ownership(Handle h) noexcept {
        return ContentVisibilityAutoStateChangeEventInit(h);
    }
ContentVisibilityAutoStateChangeEventInit::ContentVisibilityAutoStateChangeEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
ContentVisibilityAutoStateChangeEventInit::ContentVisibilityAutoStateChangeEventInit() noexcept: EventInit(emlite::Val::object()) {}
ContentVisibilityAutoStateChangeEventInit ContentVisibilityAutoStateChangeEventInit::clone() const noexcept { return *this; }

bool ContentVisibilityAutoStateChangeEventInit::skipped() const {
    return emlite::Val::get("skipped").as<bool>();
}

void ContentVisibilityAutoStateChangeEventInit::skipped(bool value) {
    emlite::Val::set("skipped", value);
}


} // namespace webbind