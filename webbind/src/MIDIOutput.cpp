#include "webbind/MIDIOutput.hpp"

namespace webbind {

MIDIOutput MIDIOutput::take_ownership(Handle h) noexcept {
        return MIDIOutput(h);
    }
MIDIOutput MIDIOutput::clone() const noexcept { return *this; }
emlite::Val MIDIOutput::instance() noexcept { return emlite::Val::global("MIDIOutput"); }
MIDIOutput::MIDIOutput(Handle h) noexcept : MIDIPort(emlite::Val::take_ownership(h)) {}
MIDIOutput::MIDIOutput(const emlite::Val &val) noexcept: MIDIPort(val) {}

jsbind::Undefined MIDIOutput::send(jsbind::TypedArray<unsigned char> data) {
    return MIDIPort::call("send", data).as<jsbind::Undefined>();
}

jsbind::Undefined MIDIOutput::send(jsbind::TypedArray<unsigned char> data, const jsbind::Any& timestamp) {
    return MIDIPort::call("send", data, timestamp).as<jsbind::Undefined>();
}

jsbind::Undefined MIDIOutput::clear() {
    return MIDIPort::call("clear").as<jsbind::Undefined>();
}


} // namespace webbind