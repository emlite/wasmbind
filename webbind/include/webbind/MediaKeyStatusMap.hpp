#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class MediaKeyStatusMap : public emlite::Val {
    explicit MediaKeyStatusMap(Handle h) noexcept;

public:
    explicit MediaKeyStatusMap(const emlite::Val &val) noexcept;
    static MediaKeyStatusMap take_ownership(Handle h) noexcept;

    MediaKeyStatusMap clone() const noexcept;
    unsigned long size() const;
    bool has(const jsbind::Any& keyId);
    jsbind::Any get(const jsbind::Any& keyId);
};

