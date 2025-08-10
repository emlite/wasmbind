#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ConvertCoordinateOptions
/// [`ConvertCoordinateOptions`](https://developer.mozilla.org/en-US/docs/Web/API/ConvertCoordinateOptions)
class ConvertCoordinateOptions : public emlite::Val {
  explicit ConvertCoordinateOptions(Handle h) noexcept;
public:
    static ConvertCoordinateOptions take_ownership(Handle h) noexcept;
    explicit ConvertCoordinateOptions(const emlite::Val &val) noexcept;
    ConvertCoordinateOptions() noexcept;
    [[nodiscard]] ConvertCoordinateOptions clone() const noexcept;
    [[nodiscard]] CSSBoxType fromBox() const;
    void fromBox(const CSSBoxType& value);
    [[nodiscard]] CSSBoxType toBox() const;
    void toBox(const CSSBoxType& value);
};

} // namespace webbind