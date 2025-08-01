#include <webbind/DragEvent.hpp>
#include <webbind/DataTransfer.hpp>


DragEvent DragEvent::take_ownership(Handle h) noexcept {
        return DragEvent(h);
    }
DragEvent DragEvent::clone() const noexcept { return *this; }
DragEvent::DragEvent(Handle h) noexcept : MouseEvent(emlite::Val::take_ownership(h)) {}
DragEvent::DragEvent(const emlite::Val &val) noexcept: MouseEvent(val) {}


DragEvent::DragEvent(const jsbind::String& type) : MouseEvent(emlite::Val::global("DragEvent").new_(type)) {}

DragEvent::DragEvent(const jsbind::String& type, const jsbind::Any& eventInitDict) : MouseEvent(emlite::Val::global("DragEvent").new_(type, eventInitDict)) {}

DataTransfer DragEvent::dataTransfer() const {
    return MouseEvent::get("dataTransfer").as<DataTransfer>();
}

