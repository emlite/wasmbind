#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type MockCapturePromptResultConfiguration
/// [`MockCapturePromptResultConfiguration`](https://developer.mozilla.org/en-US/docs/Web/API/MockCapturePromptResultConfiguration)
class MockCapturePromptResultConfiguration : public emlite::Val {
  explicit MockCapturePromptResultConfiguration(Handle h) noexcept;
public:
    static MockCapturePromptResultConfiguration take_ownership(Handle h) noexcept;
    explicit MockCapturePromptResultConfiguration(const emlite::Val &val) noexcept;
    MockCapturePromptResultConfiguration() noexcept;
    [[nodiscard]] MockCapturePromptResultConfiguration clone() const noexcept;
    [[nodiscard]] MockCapturePromptResult getUserMedia() const;
    void getUserMedia(const MockCapturePromptResult& value);
    [[nodiscard]] MockCapturePromptResult getDisplayMedia() const;
    void getDisplayMedia(const MockCapturePromptResult& value);
};

} // namespace webbind