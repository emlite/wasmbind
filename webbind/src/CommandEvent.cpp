#include <webbind/CommandEvent.hpp>
#include <webbind/Element.hpp>


CommandEvent CommandEvent::take_ownership(Handle h) noexcept {
        return CommandEvent(h);
    }
CommandEvent CommandEvent::clone() const noexcept { return *this; }
CommandEvent::CommandEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
CommandEvent::CommandEvent(const emlite::Val &val) noexcept: Event(val) {}


CommandEvent::CommandEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict): Event(emlite::Val::global("CommandEvent").new_(type, eventInitDict)) {}

Element CommandEvent::source() const {
    return Event::get("source").as<Element>();
}

jsbind::DOMString CommandEvent::command() const {
    return Event::get("command").as<jsbind::DOMString>();
}

