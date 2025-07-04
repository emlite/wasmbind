#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class WEBGL_multi_draw : public emlite::Val {
    explicit WEBGL_multi_draw(Handle h) noexcept;

public:
    explicit WEBGL_multi_draw(const emlite::Val &val) noexcept;
    static WEBGL_multi_draw take_ownership(Handle h) noexcept;

    WEBGL_multi_draw clone() const noexcept;
    jsbind::Undefined multiDrawArraysWEBGL(const jsbind::Any& mode, const jsbind::Any& firstsList, long long firstsOffset, const jsbind::Any& countsList, long long countsOffset, const jsbind::Any& drawcount);
    jsbind::Undefined multiDrawElementsWEBGL(const jsbind::Any& mode, const jsbind::Any& countsList, long long countsOffset, const jsbind::Any& type, const jsbind::Any& offsetsList, long long offsetsOffset, const jsbind::Any& drawcount);
    jsbind::Undefined multiDrawArraysInstancedWEBGL(const jsbind::Any& mode, const jsbind::Any& firstsList, long long firstsOffset, const jsbind::Any& countsList, long long countsOffset, const jsbind::Any& instanceCountsList, long long instanceCountsOffset, const jsbind::Any& drawcount);
    jsbind::Undefined multiDrawElementsInstancedWEBGL(const jsbind::Any& mode, const jsbind::Any& countsList, long long countsOffset, const jsbind::Any& type, const jsbind::Any& offsetsList, long long offsetsOffset, const jsbind::Any& instanceCountsList, long long instanceCountsOffset, const jsbind::Any& drawcount);
};

