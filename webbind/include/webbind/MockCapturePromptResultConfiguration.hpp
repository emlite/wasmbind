#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type MockCapturePromptResultConfiguration
class MockCapturePromptResultConfiguration : public emlite::Val {
  explicit MockCapturePromptResultConfiguration(Handle h) noexcept;
public:
    static MockCapturePromptResultConfiguration take_ownership(Handle h) noexcept;
    explicit MockCapturePromptResultConfiguration(const emlite::Val &val) noexcept;
    MockCapturePromptResultConfiguration() noexcept;
    [[nodiscard]] MockCapturePromptResultConfiguration clone() const noexcept;
    /// Getter of the `getUserMedia` attribute.
    [[nodiscard]] MockCapturePromptResult getUserMedia() const;
    /// Setter of the `getUserMedia` attribute.
    void getUserMedia(const MockCapturePromptResult& value);
    /// Getter of the `getDisplayMedia` attribute.
    [[nodiscard]] MockCapturePromptResult getDisplayMedia() const;
    /// Setter of the `getDisplayMedia` attribute.
    void getDisplayMedia(const MockCapturePromptResult& value);
};

} // namespace webbind