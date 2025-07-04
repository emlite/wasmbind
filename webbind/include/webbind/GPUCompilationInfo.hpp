#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class GPUCompilationMessage;


class GPUCompilationInfo : public emlite::Val {
    explicit GPUCompilationInfo(Handle h) noexcept;

public:
    explicit GPUCompilationInfo(const emlite::Val &val) noexcept;
    static GPUCompilationInfo take_ownership(Handle h) noexcept;

    GPUCompilationInfo clone() const noexcept;
    jsbind::FrozenArray<GPUCompilationMessage> messages() const;
};

