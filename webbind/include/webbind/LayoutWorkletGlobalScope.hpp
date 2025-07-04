#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "WorkletGlobalScope.hpp"
#include "enums.hpp"


class LayoutWorkletGlobalScope : public WorkletGlobalScope {
    explicit LayoutWorkletGlobalScope(Handle h) noexcept;

public:
    explicit LayoutWorkletGlobalScope(const emlite::Val &val) noexcept;
    static LayoutWorkletGlobalScope take_ownership(Handle h) noexcept;

    LayoutWorkletGlobalScope clone() const noexcept;
    jsbind::Undefined registerLayout(const jsbind::DOMString& name, const jsbind::Any& layoutCtor);
};

