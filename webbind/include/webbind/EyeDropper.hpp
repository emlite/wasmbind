#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class ColorSelectionResult;
class ColorSelectionOptions;
class AbortSignal;


class ColorSelectionResult : public emlite::Val {
  explicit ColorSelectionResult(Handle h) noexcept;
public:
    static ColorSelectionResult take_ownership(Handle h) noexcept;
    explicit ColorSelectionResult(const emlite::Val &val) noexcept;
    ColorSelectionResult() noexcept;
    [[nodiscard]] ColorSelectionResult clone() const noexcept;
    [[nodiscard]] jsbind::String sRGBHex() const;
    void sRGBHex(const jsbind::String& value);
};

class ColorSelectionOptions : public emlite::Val {
  explicit ColorSelectionOptions(Handle h) noexcept;
public:
    static ColorSelectionOptions take_ownership(Handle h) noexcept;
    explicit ColorSelectionOptions(const emlite::Val &val) noexcept;
    ColorSelectionOptions() noexcept;
    [[nodiscard]] ColorSelectionOptions clone() const noexcept;
    [[nodiscard]] AbortSignal signal() const;
    void signal(const AbortSignal& value);
};

/// The EyeDropper class.
/// [`EyeDropper`](https://developer.mozilla.org/en-US/docs/Web/API/EyeDropper)
class EyeDropper : public emlite::Val {
    explicit EyeDropper(Handle h) noexcept;

public:
    explicit EyeDropper(const emlite::Val &val) noexcept;
    static EyeDropper take_ownership(Handle h) noexcept;

    [[nodiscard]] EyeDropper clone() const noexcept;
    /// The `new EyeDropper(..)` constructor, creating a new EyeDropper instance
    EyeDropper();
    /// The open method.
    /// [`EyeDropper.open`](https://developer.mozilla.org/en-US/docs/Web/API/EyeDropper/open)
    jsbind::Promise<ColorSelectionResult> open();
    /// The open method.
    /// [`EyeDropper.open`](https://developer.mozilla.org/en-US/docs/Web/API/EyeDropper/open)
    jsbind::Promise<ColorSelectionResult> open(const ColorSelectionOptions& options);
};

