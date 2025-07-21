#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Navigator.hpp"
#include "enums.hpp"

class MediaKeys;


class MediaKeySystemAccess : public emlite::Val {
    explicit MediaKeySystemAccess(Handle h) noexcept;

public:
    explicit MediaKeySystemAccess(const emlite::Val &val) noexcept;
    static MediaKeySystemAccess take_ownership(Handle h) noexcept;

    MediaKeySystemAccess clone() const noexcept;
    jsbind::DOMString keySystem() const;
    MediaKeySystemConfiguration getConfiguration();
    jsbind::Promise<MediaKeys> createMediaKeys();
};

