#include "webbind/DragEventInit.hpp"
#include "webbind/DataTransfer.hpp"

using emlite::Val;
namespace webbind {

DragEventInit::DragEventInit(Handle h) noexcept : MouseEventInit(emlite::Val::take_ownership(h)) {}
DragEventInit DragEventInit::take_ownership(Handle h) noexcept {
        return DragEventInit(h);
    }
DragEventInit::DragEventInit(const emlite::Val &val) noexcept: MouseEventInit(val) {}
DragEventInit::DragEventInit() noexcept: MouseEventInit(emlite::Val::object()) {}
DragEventInit DragEventInit::clone() const noexcept { return *this; }

DataTransfer DragEventInit::dataTransfer() const {
    return emlite::Val::get("dataTransfer").as<DataTransfer>();
}

void DragEventInit::dataTransfer(const DataTransfer& value) {
    emlite::Val::set("dataTransfer", value);
}


} // namespace webbind