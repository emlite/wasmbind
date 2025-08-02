#include <webbind/AudioEncoder.hpp>
#include <webbind/AudioData.hpp>


AudioEncoderConfig::AudioEncoderConfig(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AudioEncoderConfig AudioEncoderConfig::take_ownership(Handle h) noexcept {
        return AudioEncoderConfig(h);
    }
AudioEncoderConfig::AudioEncoderConfig(const emlite::Val &val) noexcept: emlite::Val(val) {}
AudioEncoderConfig::AudioEncoderConfig() noexcept: emlite::Val(emlite::Val::object()) {}
AudioEncoderConfig AudioEncoderConfig::clone() const noexcept { return *this; }

jsbind::String AudioEncoderConfig::codec() const {
    return emlite::Val::get("codec").as<jsbind::String>();
}

void AudioEncoderConfig::codec(const jsbind::String& value) {
    emlite::Val::set("codec", value);
}

unsigned long AudioEncoderConfig::sampleRate() const {
    return emlite::Val::get("sampleRate").as<unsigned long>();
}

void AudioEncoderConfig::sampleRate(unsigned long value) {
    emlite::Val::set("sampleRate", value);
}

unsigned long AudioEncoderConfig::numberOfChannels() const {
    return emlite::Val::get("numberOfChannels").as<unsigned long>();
}

void AudioEncoderConfig::numberOfChannels(unsigned long value) {
    emlite::Val::set("numberOfChannels", value);
}

long long AudioEncoderConfig::bitrate() const {
    return emlite::Val::get("bitrate").as<long long>();
}

void AudioEncoderConfig::bitrate(long long value) {
    emlite::Val::set("bitrate", value);
}

BitrateMode AudioEncoderConfig::bitrateMode() const {
    return emlite::Val::get("bitrateMode").as<BitrateMode>();
}

void AudioEncoderConfig::bitrateMode(const BitrateMode& value) {
    emlite::Val::set("bitrateMode", value);
}

AudioEncoderSupport::AudioEncoderSupport(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AudioEncoderSupport AudioEncoderSupport::take_ownership(Handle h) noexcept {
        return AudioEncoderSupport(h);
    }
AudioEncoderSupport::AudioEncoderSupport(const emlite::Val &val) noexcept: emlite::Val(val) {}
AudioEncoderSupport::AudioEncoderSupport() noexcept: emlite::Val(emlite::Val::object()) {}
AudioEncoderSupport AudioEncoderSupport::clone() const noexcept { return *this; }

bool AudioEncoderSupport::supported() const {
    return emlite::Val::get("supported").as<bool>();
}

void AudioEncoderSupport::supported(bool value) {
    emlite::Val::set("supported", value);
}

AudioEncoderConfig AudioEncoderSupport::config() const {
    return emlite::Val::get("config").as<AudioEncoderConfig>();
}

void AudioEncoderSupport::config(const AudioEncoderConfig& value) {
    emlite::Val::set("config", value);
}

AudioEncoder AudioEncoder::take_ownership(Handle h) noexcept {
        return AudioEncoder(h);
    }
AudioEncoder AudioEncoder::clone() const noexcept { return *this; }
emlite::Val AudioEncoder::instance() noexcept { return emlite::Val::global("AudioEncoder"); }
AudioEncoder::AudioEncoder(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
AudioEncoder::AudioEncoder(const emlite::Val &val) noexcept: EventTarget(val) {}


AudioEncoder::AudioEncoder(const jsbind::Any& init) : EventTarget(emlite::Val::global("AudioEncoder").new_(init)) {}

CodecState AudioEncoder::state() const {
    return EventTarget::get("state").as<CodecState>();
}

unsigned long AudioEncoder::encodeQueueSize() const {
    return EventTarget::get("encodeQueueSize").as<unsigned long>();
}

jsbind::Any AudioEncoder::ondequeue() const {
    return EventTarget::get("ondequeue").as<jsbind::Any>();
}

void AudioEncoder::ondequeue(const jsbind::Any& value) {
    EventTarget::set("ondequeue", value);
}

jsbind::Undefined AudioEncoder::configure(const AudioEncoderConfig& config) {
    return EventTarget::call("configure", config).as<jsbind::Undefined>();
}

jsbind::Undefined AudioEncoder::encode(const AudioData& data) {
    return EventTarget::call("encode", data).as<jsbind::Undefined>();
}

jsbind::Promise<jsbind::Undefined> AudioEncoder::flush() {
    return EventTarget::call("flush").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Undefined AudioEncoder::reset() {
    return EventTarget::call("reset").as<jsbind::Undefined>();
}

jsbind::Undefined AudioEncoder::close() {
    return EventTarget::call("close").as<jsbind::Undefined>();
}

jsbind::Promise<AudioEncoderSupport> AudioEncoder::isConfigSupported(const AudioEncoderConfig& config) {
    return emlite::Val::global("audioencoder").call("isConfigSupported", config).as<jsbind::Promise<AudioEncoderSupport>>();
}

