#include "webbind/CommandEvent.hpp"
#include "webbind/CommandEventInit.hpp"
#include "webbind/Element.hpp"

namespace webbind {

CommandEvent CommandEvent::take_ownership(Handle h) noexcept {
        return CommandEvent(h);
    }
CommandEvent CommandEvent::clone() const noexcept { return *this; }
emlite::Val CommandEvent::instance() noexcept { return emlite::Val::global("CommandEvent"); }
CommandEvent::CommandEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
CommandEvent::CommandEvent(const emlite::Val &val) noexcept: Event(val) {}

CommandEvent::CommandEvent(const jsbind::String& type) : Event(emlite::Val::global("CommandEvent").new_(type)) {}

CommandEvent::CommandEvent(const jsbind::String& type, const CommandEventInit& eventInitDict) : Event(emlite::Val::global("CommandEvent").new_(type, eventInitDict)) {}

Element CommandEvent::source() const {
    return Event::get("source").as<Element>();
}

jsbind::String CommandEvent::command() const {
    return Event::get("command").as<jsbind::String>();
}


} // namespace webbind