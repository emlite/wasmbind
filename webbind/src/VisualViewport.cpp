#include <webbind/VisualViewport.hpp>


VisualViewport VisualViewport::take_ownership(Handle h) noexcept {
        return VisualViewport(h);
    }
VisualViewport VisualViewport::clone() const noexcept { return *this; }
emlite::Val VisualViewport::instance() noexcept { return emlite::Val::global("VisualViewport"); }
VisualViewport::VisualViewport(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
VisualViewport::VisualViewport(const emlite::Val &val) noexcept: EventTarget(val) {}


double VisualViewport::offsetLeft() const {
    return EventTarget::get("offsetLeft").as<double>();
}

double VisualViewport::offsetTop() const {
    return EventTarget::get("offsetTop").as<double>();
}

double VisualViewport::pageLeft() const {
    return EventTarget::get("pageLeft").as<double>();
}

double VisualViewport::pageTop() const {
    return EventTarget::get("pageTop").as<double>();
}

double VisualViewport::width() const {
    return EventTarget::get("width").as<double>();
}

double VisualViewport::height() const {
    return EventTarget::get("height").as<double>();
}

double VisualViewport::scale() const {
    return EventTarget::get("scale").as<double>();
}

jsbind::Any VisualViewport::onresize() const {
    return EventTarget::get("onresize").as<jsbind::Any>();
}

void VisualViewport::onresize(const jsbind::Any& value) {
    EventTarget::set("onresize", value);
}

jsbind::Any VisualViewport::onscroll() const {
    return EventTarget::get("onscroll").as<jsbind::Any>();
}

void VisualViewport::onscroll(const jsbind::Any& value) {
    EventTarget::set("onscroll", value);
}

jsbind::Any VisualViewport::onscrollend() const {
    return EventTarget::get("onscrollend").as<jsbind::Any>();
}

void VisualViewport::onscrollend(const jsbind::Any& value) {
    EventTarget::set("onscrollend", value);
}

