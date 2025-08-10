#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type EncodedVideoChunkInit
class EncodedVideoChunkInit : public emlite::Val {
  explicit EncodedVideoChunkInit(Handle h) noexcept;
public:
    static EncodedVideoChunkInit take_ownership(Handle h) noexcept;
    explicit EncodedVideoChunkInit(const emlite::Val &val) noexcept;
    EncodedVideoChunkInit() noexcept;
    [[nodiscard]] EncodedVideoChunkInit clone() const noexcept;
    /// Getter of the `type` attribute.
    [[nodiscard]] EncodedVideoChunkType type() const;
    /// Setter of the `type` attribute.
    void type(const EncodedVideoChunkType& value);
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