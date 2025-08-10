#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type BoxQuadOptions
/// [`BoxQuadOptions`](https://developer.mozilla.org/en-US/docs/Web/API/BoxQuadOptions)
class BoxQuadOptions : public emlite::Val {
  explicit BoxQuadOptions(Handle h) noexcept;
public:
    static BoxQuadOptions take_ownership(Handle h) noexcept;
    explicit BoxQuadOptions(const emlite::Val &val) noexcept;
    BoxQuadOptions() noexcept;
    [[nodiscard]] BoxQuadOptions clone() const noexcept;
    [[nodiscard]] CSSBoxType box() const;
    void box(const CSSBoxType& value);
    [[nodiscard]] jsbind::Any relativeTo() const;
    void relativeTo(const jsbind::Any& value);
};

} // namespace webbind