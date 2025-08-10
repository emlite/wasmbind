#include <webbind/PointerTimelineOptions.hpp>
#include <webbind/Element.hpp>

using emlite::Val;
namespace webbind {

PointerTimelineOptions::PointerTimelineOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PointerTimelineOptions PointerTimelineOptions::take_ownership(Handle h) noexcept {
        return PointerTimelineOptions(h);
    }
PointerTimelineOptions::PointerTimelineOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
PointerTimelineOptions::PointerTimelineOptions() noexcept: emlite::Val(emlite::Val::object()) {}
PointerTimelineOptions PointerTimelineOptions::clone() const noexcept { return *this; }

Element PointerTimelineOptions::source() const {
    return emlite::Val::get("source").as<Element>();
}

void PointerTimelineOptions::source(const Element& value) {
    emlite::Val::set("source", value);
}

PointerAxis PointerTimelineOptions::axis() const {
    return emlite::Val::get("axis").as<PointerAxis>();
}

void PointerTimelineOptions::axis(const PointerAxis& value) {
    emlite::Val::set("axis", value);
}


} // namespace webbind