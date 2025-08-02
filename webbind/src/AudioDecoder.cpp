#include <webbind/AudioDecoder.hpp>
#include <webbind/EncodedAudioChunk.hpp>


AudioDecoderConfig::AudioDecoderConfig(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AudioDecoderConfig AudioDecoderConfig::take_ownership(Handle h) noexcept {
        return AudioDecoderConfig(h);
    }
AudioDecoderConfig::AudioDecoderConfig(const emlite::Val &val) noexcept: emlite::Val(val) {}
AudioDecoderConfig::AudioDecoderConfig() noexcept: emlite::Val(emlite::Val::object()) {}
AudioDecoderConfig AudioDecoderConfig::clone() const noexcept { return *this; }

jsbind::String AudioDecoderConfig::codec() const {
    return emlite::Val::get("codec").as<jsbind::String>();
}

void AudioDecoderConfig::codec(const jsbind::String& value) {
    emlite::Val::set("codec", value);
}

unsigned long AudioDecoderConfig::sampleRate() const {
    return emlite::Val::get("sampleRate").as<unsigned long>();
}

void AudioDecoderConfig::sampleRate(unsigned long value) {
    emlite::Val::set("sampleRate", value);
}

unsigned long AudioDecoderConfig::numberOfChannels() const {
    return emlite::Val::get("numberOfChannels").as<unsigned long>();
}

void AudioDecoderConfig::numberOfChannels(unsigned long value) {
    emlite::Val::set("numberOfChannels", value);
}

jsbind::Any AudioDecoderConfig::description() const {
    return emlite::Val::get("description").as<jsbind::Any>();
}

void AudioDecoderConfig::description(const jsbind::Any& value) {
    emlite::Val::set("description", value);
}

AudioDecoderSupport::AudioDecoderSupport(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AudioDecoderSupport AudioDecoderSupport::take_ownership(Handle h) noexcept {
        return AudioDecoderSupport(h);
    }
AudioDecoderSupport::AudioDecoderSupport(const emlite::Val &val) noexcept: emlite::Val(val) {}
AudioDecoderSupport::AudioDecoderSupport() noexcept: emlite::Val(emlite::Val::object()) {}
AudioDecoderSupport AudioDecoderSupport::clone() const noexcept { return *this; }

bool AudioDecoderSupport::supported() const {
    return emlite::Val::get("supported").as<bool>();
}

void AudioDecoderSupport::supported(bool value) {
    emlite::Val::set("supported", value);
}

AudioDecoderConfig AudioDecoderSupport::config() const {
    return emlite::Val::get("config").as<AudioDecoderConfig>();
}

void AudioDecoderSupport::config(const AudioDecoderConfig& value) {
    emlite::Val::set("config", value);
}

AudioDecoder AudioDecoder::take_ownership(Handle h) noexcept {
        return AudioDecoder(h);
    }
AudioDecoder AudioDecoder::clone() const noexcept { return *this; }
emlite::Val AudioDecoder::instance() noexcept { return emlite::Val::global("AudioDecoder"); }
AudioDecoder::AudioDecoder(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
AudioDecoder::AudioDecoder(const emlite::Val &val) noexcept: EventTarget(val) {}


AudioDecoder::AudioDecoder(const jsbind::Any& init) : EventTarget(emlite::Val::global("AudioDecoder").new_(init)) {}

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

