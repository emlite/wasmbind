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
    ColorSelectionResult clone() const noexcept;
    jsbind::String sRGBHex() const;
    void sRGBHex(const jsbind::String& value);
};

class ColorSelectionOptions : public emlite::Val {
  explicit ColorSelectionOptions(Handle h) noexcept;
public:
    static ColorSelectionOptions take_ownership(Handle h) noexcept;
    explicit ColorSelectionOptions(const emlite::Val &val) noexcept;
    ColorSelectionOptions() noexcept;
    ColorSelectionOptions clone() const noexcept;
    AbortSignal signal() const;
    void signal(const AbortSignal& value);
};

class EyeDropper : public emlite::Val {
    explicit EyeDropper(Handle h) noexcept;

public:
    explicit EyeDropper(const emlite::Val &val) noexcept;
    static EyeDropper take_ownership(Handle h) noexcept;

    EyeDropper clone() const noexcept;
    EyeDropper();
    jsbind::Promise<ColorSelectionResult> open();
    jsbind::Promise<ColorSelectionResult> open(const ColorSelectionOptions& options);
};

