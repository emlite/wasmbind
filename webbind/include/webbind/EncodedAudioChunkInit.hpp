#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type EncodedAudioChunkInit
class EncodedAudioChunkInit : public emlite::Val {
  explicit EncodedAudioChunkInit(Handle h) noexcept;
public:
    static EncodedAudioChunkInit take_ownership(Handle h) noexcept;
    explicit EncodedAudioChunkInit(const emlite::Val &val) noexcept;
    EncodedAudioChunkInit() noexcept;
    [[nodiscard]] EncodedAudioChunkInit clone() const noexcept;
    /// Getter of the `type` attribute.
    [[nodiscard]] EncodedAudioChunkType type() const;
    /// Setter of the `type` attribute.
    void type(const EncodedAudioChunkType& value);
    /// Getter of the `timestamp` attribute.
    [[nodiscard]] long long timestamp() const;
    /// Setter of the `timestamp` attribute.
    void timestamp(long long value);
    /// Getter of the `duration` attribute.
    [[nodiscard]] long long duration() const;
    /// Setter of the `duration` attribute.
    void duration(long long value);
    /// Getter of the `data` attribute.
    [[nodiscard]] jsbind::Any data() const;
    /// Setter of the `data` attribute.
    void data(const jsbind::Any& value);
    /// Getter of the `transfer` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::ArrayBuffer> transfer() const;
    /// Setter of the `transfer` attribute.
    void transfer(const jsbind::TypedArray<jsbind::ArrayBuffer>& value);
};

} // namespace webbind