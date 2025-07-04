#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class GPUCompilationInfo;


class GPUShaderModule : public emlite::Val {
    explicit GPUShaderModule(Handle h) noexcept;

public:
    explicit GPUShaderModule(const emlite::Val &val) noexcept;
    static GPUShaderModule take_ownership(Handle h) noexcept;

    GPUShaderModule clone() const noexcept;
    jsbind::Promise getCompilationInfo();
    jsbind::USVString label() const;
    void label(const jsbind::USVString& value);
};

