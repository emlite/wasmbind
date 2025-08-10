#include "webbind/CommandEventInit.hpp"
#include "webbind/Element.hpp"

using emlite::Val;
namespace webbind {

CommandEventInit::CommandEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
CommandEventInit CommandEventInit::take_ownership(Handle h) noexcept {
        return CommandEventInit(h);
    }
CommandEventInit::CommandEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
CommandEventInit::CommandEventInit() noexcept: EventInit(emlite::Val::object()) {}
CommandEventInit CommandEventInit::clone() const noexcept { return *this; }

Element CommandEventInit::source() const {
    return emlite::Val::get("source").as<Element>();
}

void CommandEventInit::source(const Element& value) {
    emlite::Val::set("source", value);
}

jsbind::String CommandEventInit::command() const {
    return emlite::Val::get("command").as<jsbind::String>();
}

void CommandEventInit::command(const jsbind::String& value) {
    emlite::Val::set("command", value);
}


} // namespace webbind