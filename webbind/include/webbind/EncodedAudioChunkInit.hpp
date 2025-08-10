#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type EncodedAudioChunkInit
/// [`EncodedAudioChunkInit`](https://developer.mozilla.org/en-US/docs/Web/API/EncodedAudioChunkInit)
class EncodedAudioChunkInit : public emlite::Val {
  explicit EncodedAudioChunkInit(Handle h) noexcept;
public:
    static EncodedAudioChunkInit take_ownership(Handle h) noexcept;
    explicit EncodedAudioChunkInit(const emlite::Val &val) noexcept;
    EncodedAudioChunkInit() noexcept;
    [[nodiscard]] EncodedAudioChunkInit clone() const noexcept;
    [[nodiscard]] EncodedAudioChunkType type() const;
    void type(const EncodedAudioChunkType& value);
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