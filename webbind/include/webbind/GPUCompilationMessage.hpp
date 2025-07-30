#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class GPUCompilationMessage : public emlite::Val {
    explicit GPUCompilationMessage(Handle h) noexcept;

public:
    explicit GPUCompilationMessage(const emlite::Val &val) noexcept;
    static GPUCompilationMessage take_ownership(Handle h) noexcept;

    GPUCompilationMessage clone() const noexcept;
    jsbind::String message() const;
    GPUCompilationMessageType type() const;
    long long lineNum() const;
    long long linePos() const;
    long long offset() const;
    long long length() const;
};

