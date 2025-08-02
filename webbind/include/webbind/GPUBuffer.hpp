#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The GPUBuffer class.
/// [`GPUBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/GPUBuffer)
class GPUBuffer : public emlite::Val {
    explicit GPUBuffer(Handle h) noexcept;

public:
    explicit GPUBuffer(const emlite::Val &val) noexcept;
    static GPUBuffer take_ownership(Handle h) noexcept;

    [[nodiscard]] GPUBuffer clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `size` attribute.
    /// [`GPUBuffer.size`](https://developer.mozilla.org/en-US/docs/Web/API/GPUBuffer/size)
    [[nodiscard]] jsbind::Any size() const;
    /// Getter of the `usage` attribute.
    /// [`GPUBuffer.usage`](https://developer.mozilla.org/en-US/docs/Web/API/GPUBuffer/usage)
    [[nodiscard]] jsbind::Any usage() const;
    /// Getter of the `mapState` attribute.
    /// [`GPUBuffer.mapState`](https://developer.mozilla.org/en-US/docs/Web/API/GPUBuffer/mapState)
    [[nodiscard]] GPUBufferMapState mapState() const;
    /// The mapAsync method.
    /// [`GPUBuffer.mapAsync`](https://developer.mozilla.org/en-US/docs/Web/API/GPUBuffer/mapAsync)
    jsbind::Promise<jsbind::Undefined> mapAsync(const jsbind::Any& mode);
    /// The mapAsync method.
    /// [`GPUBuffer.mapAsync`](https://developer.mozilla.org/en-US/docs/Web/API/GPUBuffer/mapAsync)
    jsbind::Promise<jsbind::Undefined> mapAsync(const jsbind::Any& mode, const jsbind::Any& offset);
    /// The mapAsync method.
    /// [`GPUBuffer.mapAsync`](https://developer.mozilla.org/en-US/docs/Web/API/GPUBuffer/mapAsync)
    jsbind::Promise<jsbind::Undefined> mapAsync(const jsbind::Any& mode, const jsbind::Any& offset, const jsbind::Any& size);
    /// The getMappedRange method.
    /// [`GPUBuffer.getMappedRange`](https://developer.mozilla.org/en-US/docs/Web/API/GPUBuffer/getMappedRange)
    jsbind::ArrayBuffer getMappedRange();
    /// The getMappedRange method.
    /// [`GPUBuffer.getMappedRange`](https://developer.mozilla.org/en-US/docs/Web/API/GPUBuffer/getMappedRange)
    jsbind::ArrayBuffer getMappedRange(const jsbind::Any& offset);
    /// The getMappedRange method.
    /// [`GPUBuffer.getMappedRange`](https://developer.mozilla.org/en-US/docs/Web/API/GPUBuffer/getMappedRange)
    jsbind::ArrayBuffer getMappedRange(const jsbind::Any& offset, const jsbind::Any& size);
    /// The unmap method.
    /// [`GPUBuffer.unmap`](https://developer.mozilla.org/en-US/docs/Web/API/GPUBuffer/unmap)
    jsbind::Undefined unmap();
    /// The destroy method.
    /// [`GPUBuffer.destroy`](https://developer.mozilla.org/en-US/docs/Web/API/GPUBuffer/destroy)
    jsbind::Undefined destroy();
    /// Getter of the `label` attribute.
    /// [`GPUBuffer.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPUBuffer/label)
    [[nodiscard]] jsbind::String label() const;
    /// Setter of the `label` attribute.
    /// [`GPUBuffer.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPUBuffer/label)
    void label(const jsbind::String& value);
};

