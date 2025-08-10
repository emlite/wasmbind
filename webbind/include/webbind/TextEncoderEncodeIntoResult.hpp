#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type TextEncoderEncodeIntoResult
/// [`TextEncoderEncodeIntoResult`](https://developer.mozilla.org/en-US/docs/Web/API/TextEncoderEncodeIntoResult)
class TextEncoderEncodeIntoResult : public emlite::Val {
  explicit TextEncoderEncodeIntoResult(Handle h) noexcept;
public:
    static TextEncoderEncodeIntoResult take_ownership(Handle h) noexcept;
    explicit TextEncoderEncodeIntoResult(const emlite::Val &val) noexcept;
    TextEncoderEncodeIntoResult() noexcept;
    [[nodiscard]] TextEncoderEncodeIntoResult clone() const noexcept;
    [[nodiscard]] long long read() const;
    void read(long long value);
    [[nodiscard]] long long written() const;
    void written(long long value);
};

} // namespace webbind