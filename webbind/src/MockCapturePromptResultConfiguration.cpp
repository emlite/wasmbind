#include "webbind/MockCapturePromptResultConfiguration.hpp"

using emlite::Val;
namespace webbind {

MockCapturePromptResultConfiguration::MockCapturePromptResultConfiguration(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MockCapturePromptResultConfiguration MockCapturePromptResultConfiguration::take_ownership(Handle h) noexcept {
        return MockCapturePromptResultConfiguration(h);
    }
MockCapturePromptResultConfiguration::MockCapturePromptResultConfiguration(const emlite::Val &val) noexcept: emlite::Val(val) {}
MockCapturePromptResultConfiguration::MockCapturePromptResultConfiguration() noexcept: emlite::Val(emlite::Val::object()) {}
MockCapturePromptResultConfiguration MockCapturePromptResultConfiguration::clone() const noexcept { return *this; }

MockCapturePromptResult MockCapturePromptResultConfiguration::getUserMedia() const {
    return emlite::Val::get("getUserMedia").as<MockCapturePromptResult>();
}

void MockCapturePromptResultConfiguration::getUserMedia(const MockCapturePromptResult& value) {
    emlite::Val::set("getUserMedia", value);
}

MockCapturePromptResult MockCapturePromptResultConfiguration::getDisplayMedia() const {
    return emlite::Val::get("getDisplayMedia").as<MockCapturePromptResult>();
}

void MockCapturePromptResultConfiguration::getDisplayMedia(const MockCapturePromptResult& value) {
    emlite::Val::set("getDisplayMedia", value);
}


} // namespace webbind