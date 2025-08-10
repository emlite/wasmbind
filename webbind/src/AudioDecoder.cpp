#include <webbind/AudioDecoder.hpp>
#include <webbind/AudioDecoderInit.hpp>
#include <webbind/AudioDecoderConfig.hpp>
#include <webbind/EncodedAudioChunk.hpp>
#include <webbind/AudioDecoderSupport.hpp>

namespace webbind {

AudioDecoder AudioDecoder::take_ownership(Handle h) noexcept {
    return AudioDecoder(h);
}

AudioDecoder AudioDecoder::clone() const noexcept { return *this; }

emlite::Val AudioDecoder::instance() noexcept { return emlite::Val::global("AudioDecoder"); }

AudioDecoder::AudioDecoder(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}

AudioDecoder::AudioDecoder(const emlite::Val &val) noexcept: EventTarget(val) {}

AudioDecoder::AudioDecoder(const AudioDecoderInit& init) : EventTarget(emlite::Val::global("AudioDecoder").new_(init)) {}

CodecState AudioDecoder::state() const {
    return EventTarget::get("state").as<CodecState>();
}

unsigned long AudioDecoder::decodeQueueSize() const {
    return EventTarget::get("decodeQueueSize").as<unsigned long>();
}

jsbind::Any AudioDecoder::ondequeue() const {
    return EventTarget::get("ondequeue").as<jsbind::Any>();
}

void AudioDecoder::ondequeue(const jsbind::Any& value) {
    EventTarget::set("ondequeue", value);
}

jsbind::Undefined AudioDecoder::configure(const AudioDecoderConfig& config) {
    return EventTarget::call("configure", config).as<jsbind::Undefined>();
}

jsbind::Undefined AudioDecoder::decode(const EncodedAudioChunk& chunk) {
    return EventTarget::call("decode", chunk).as<jsbind::Undefined>();
}

jsbind::Promise<jsbind::Undefined> AudioDecoder::flush() {
    return EventTarget::call("flush").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Undefined AudioDecoder::reset() {
    return EventTarget::call("reset").as<jsbind::Undefined>();
}

jsbind::Undefined AudioDecoder::close() {
    return EventTarget::call("close").as<jsbind::Undefined>();
}

jsbind::Promise<AudioDecoderSupport> AudioDecoder::isConfigSupported(const AudioDecoderConfig& config) {
    return emlite::Val::global("audiodecoder").call("isConfigSupported", config).as<jsbind::Promise<AudioDecoderSupport>>();
}


} // namespace webbind