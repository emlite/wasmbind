#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface EXT_color_buffer_float
/// [`EXT_color_buffer_float`](https://developer.mozilla.org/en-US/docs/Web/API/EXT_color_buffer_float)
class EXT_color_buffer_float : public emlite::Val {
    explicit EXT_color_buffer_float(Handle h) noexcept;
public:
    explicit EXT_color_buffer_float(const emlite::Val &val) noexcept;
    static EXT_color_buffer_float take_ownership(Handle h) noexcept;
    [[nodiscard]] EXT_color_buffer_float clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

} // namespace webbind