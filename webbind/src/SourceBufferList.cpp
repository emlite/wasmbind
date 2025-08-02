#include <webbind/SourceBufferList.hpp>
#include <webbind/SourceBuffer.hpp>


SourceBufferList SourceBufferList::take_ownership(Handle h) noexcept {
        return SourceBufferList(h);
    }
SourceBufferList SourceBufferList::clone() const noexcept { return *this; }
emlite::Val SourceBufferList::instance() noexcept { return emlite::Val::global("SourceBufferList"); }
SourceBufferList::SourceBufferList(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
SourceBufferList::SourceBufferList(const emlite::Val &val) noexcept: EventTarget(val) {}


unsigned long SourceBufferList::length() const {
    return EventTarget::get("length").as<unsigned long>();
}

jsbind::Any SourceBufferList::onaddsourcebuffer() const {
    return EventTarget::get("onaddsourcebuffer").as<jsbind::Any>();
}

void SourceBufferList::onaddsourcebuffer(const jsbind::Any& value) {
    EventTarget::set("onaddsourcebuffer", value);
}

jsbind::Any SourceBufferList::onremovesourcebuffer() const {
    return EventTarget::get("onremovesourcebuffer").as<jsbind::Any>();
}

void SourceBufferList::onremovesourcebuffer(const jsbind::Any& value) {
    EventTarget::set("onremovesourcebuffer", value);
}

