#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type EncodedVideoChunkInit
/// [`EncodedVideoChunkInit`](https://developer.mozilla.org/en-US/docs/Web/API/EncodedVideoChunkInit)
class EncodedVideoChunkInit : public emlite::Val {
  explicit EncodedVideoChunkInit(Handle h) noexcept;
public:
    static EncodedVideoChunkInit take_ownership(Handle h) noexcept;
    explicit EncodedVideoChunkInit(const emlite::Val &val) noexcept;
    EncodedVideoChunkInit() noexcept;
    [[nodiscard]] EncodedVideoChunkInit clone() const noexcept;
    [[nodiscard]] EncodedVideoChunkType type() const;
    void type(const EncodedVideoChunkType& value);
    [[nodiscard]] long long timestamp() const;
    void timestamp(long long value);
    [[nodiscard]] long long duration() const;
    void duration(long long value);
    [[nodiscard]] jsbind::Any data() const;
    void data(const jsbind::Any& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::ArrayBuffer> transfer() const;
    void transfer(const jsbind::TypedArray<jsbind::ArrayBuffer>& value);
};

} // namespace webbind