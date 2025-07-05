#include <webbind/VTTCue.hpp>
#include <webbind/VTTRegion.hpp>
#include <webbind/DocumentFragment.hpp>


VTTCue VTTCue::take_ownership(Handle h) noexcept {
        return VTTCue(h);
    }
VTTCue VTTCue::clone() const noexcept { return *this; }
VTTCue::VTTCue(Handle h) noexcept : TextTrackCue(emlite::Val::take_ownership(h)) {}
VTTCue::VTTCue(const emlite::Val &val) noexcept: TextTrackCue(val) {}


VTTCue::VTTCue(double startTime, double endTime, const jsbind::DOMString& text) : TextTrackCue(emlite::Val::global("VTTCue").new_(startTime, endTime, text)) {}

VTTRegion VTTCue::region() const {
    return TextTrackCue::get("region").as<VTTRegion>();
}

void VTTCue::region(const VTTRegion& value) {
    TextTrackCue::set("region", value);
}

DirectionSetting VTTCue::vertical() const {
    return TextTrackCue::get("vertical").as<DirectionSetting>();
}

void VTTCue::vertical(const DirectionSetting& value) {
    TextTrackCue::set("vertical", value);
}

bool VTTCue::snapToLines() const {
    return TextTrackCue::get("snapToLines").as<bool>();
}

void VTTCue::snapToLines(bool value) {
    TextTrackCue::set("snapToLines", value);
}

jsbind::Any VTTCue::line() const {
    return TextTrackCue::get("line").as<jsbind::Any>();
}

void VTTCue::line(const jsbind::Any& value) {
    TextTrackCue::set("line", value);
}

LineAlignSetting VTTCue::lineAlign() const {
    return TextTrackCue::get("lineAlign").as<LineAlignSetting>();
}

void VTTCue::lineAlign(const LineAlignSetting& value) {
    TextTrackCue::set("lineAlign", value);
}

jsbind::Any VTTCue::position() const {
    return TextTrackCue::get("position").as<jsbind::Any>();
}

void VTTCue::position(const jsbind::Any& value) {
    TextTrackCue::set("position", value);
}

PositionAlignSetting VTTCue::positionAlign() const {
    return TextTrackCue::get("positionAlign").as<PositionAlignSetting>();
}

void VTTCue::positionAlign(const PositionAlignSetting& value) {
    TextTrackCue::set("positionAlign", value);
}

double VTTCue::size() const {
    return TextTrackCue::get("size").as<double>();
}

void VTTCue::size(double value) {
    TextTrackCue::set("size", value);
}

AlignSetting VTTCue::align() const {
    return TextTrackCue::get("align").as<AlignSetting>();
}

void VTTCue::align(const AlignSetting& value) {
    TextTrackCue::set("align", value);
}

jsbind::DOMString VTTCue::text() const {
    return TextTrackCue::get("text").as<jsbind::DOMString>();
}

void VTTCue::text(const jsbind::DOMString& value) {
    TextTrackCue::set("text", value);
}

DocumentFragment VTTCue::getCueAsHTML() {
    return TextTrackCue::call("getCueAsHTML").as<DocumentFragment>();
}

