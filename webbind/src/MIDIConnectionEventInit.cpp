#include <webbind/MIDIConnectionEventInit.hpp>
#include <webbind/MIDIPort.hpp>

using emlite::Val;
namespace webbind {

MIDIConnectionEventInit::MIDIConnectionEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
MIDIConnectionEventInit MIDIConnectionEventInit::take_ownership(Handle h) noexcept {
        return MIDIConnectionEventInit(h);
    }
MIDIConnectionEventInit::MIDIConnectionEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
MIDIConnectionEventInit::MIDIConnectionEventInit() noexcept: EventInit(emlite::Val::object()) {}
MIDIConnectionEventInit MIDIConnectionEventInit::clone() const noexcept { return *this; }

MIDIPort MIDIConnectionEventInit::port() const {
    return emlite::Val::get("port").as<MIDIPort>();
}

void MIDIConnectionEventInit::port(const MIDIPort& value) {
    emlite::Val::set("port", value);
}


} // namespace webbind