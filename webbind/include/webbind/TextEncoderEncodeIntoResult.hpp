#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type TextEncoderEncodeIntoResult
class TextEncoderEncodeIntoResult : public emlite::Val {
  explicit TextEncoderEncodeIntoResult(Handle h) noexcept;
public:
    static TextEncoderEncodeIntoResult take_ownership(Handle h) noexcept;
    explicit TextEncoderEncodeIntoResult(const emlite::Val &val) noexcept;
    TextEncoderEncodeIntoResult() noexcept;
    [[nodiscard]] TextEncoderEncodeIntoResult clone() const noexcept;
    /// Getter of the `read` attribute.
    [[nodiscard]] long long read() const;
    /// Setter of the `read` attribute.
    void read(long long value);
    /// Getter of the `written` attribute.
    [[nodiscard]] long long written() const;
    /// Setter of the `written` attribute.
    void written(long long value);
};

} // namespace webbind