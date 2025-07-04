#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "MediaSource.hpp"
#include "enums.hpp"


class ManagedMediaSource : public MediaSource {
    explicit ManagedMediaSource(Handle h) noexcept;

public:
    explicit ManagedMediaSource(const emlite::Val &val) noexcept;
    static ManagedMediaSource take_ownership(Handle h) noexcept;

    ManagedMediaSource clone() const noexcept;
    ManagedMediaSource();
    bool streaming() const;
    jsbind::Any onstartstreaming() const;
    void onstartstreaming(const jsbind::Any& value);
    jsbind::Any onendstreaming() const;
    void onendstreaming(const jsbind::Any& value);
};

