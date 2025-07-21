#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class GPUBuffer : public emlite::Val {
    explicit GPUBuffer(Handle h) noexcept;

public:
    explicit GPUBuffer(const emlite::Val &val) noexcept;
    static GPUBuffer take_ownership(Handle h) noexcept;

    GPUBuffer clone() const noexcept;
    jsbind::Any size() const;
    jsbind::Any usage() const;
    GPUBufferMapState mapState() const;
    jsbind::Promise<jsbind::Undefined> mapAsync(const jsbind::Any& mode);
    jsbind::Promise<jsbind::Undefined> mapAsync(const jsbind::Any& mode, const jsbind::Any& offset);
    jsbind::Promise<jsbind::Undefined> mapAsync(const jsbind::Any& mode, const jsbind::Any& offset, const jsbind::Any& size);
    jsbind::ArrayBuffer getMappedRange();
    jsbind::ArrayBuffer getMappedRange(const jsbind::Any& offset);
    jsbind::ArrayBuffer getMappedRange(const jsbind::Any& offset, const jsbind::Any& size);
    jsbind::Undefined unmap();
    jsbind::Undefined destroy();
    jsbind::USVString label() const;
    void label(const jsbind::USVString& value);
};

