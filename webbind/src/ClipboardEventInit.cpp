#include "webbind/ClipboardEventInit.hpp"
#include "webbind/DataTransfer.hpp"

using emlite::Val;
namespace webbind {

ClipboardEventInit::ClipboardEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
ClipboardEventInit ClipboardEventInit::take_ownership(Handle h) noexcept {
        return ClipboardEventInit(h);
    }
ClipboardEventInit::ClipboardEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
ClipboardEventInit::ClipboardEventInit() noexcept: EventInit(emlite::Val::object()) {}
ClipboardEventInit ClipboardEventInit::clone() const noexcept { return *this; }

DataTransfer ClipboardEventInit::clipboardData() const {
    return emlite::Val::get("clipboardData").as<DataTransfer>();
}

void ClipboardEventInit::clipboardData(const DataTransfer& value) {
    emlite::Val::set("clipboardData", value);
}


} // namespace webbind