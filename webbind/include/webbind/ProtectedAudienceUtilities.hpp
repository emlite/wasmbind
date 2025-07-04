#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class ProtectedAudienceUtilities : public emlite::Val {
    explicit ProtectedAudienceUtilities(Handle h) noexcept;

public:
    explicit ProtectedAudienceUtilities(const emlite::Val &val) noexcept;
    static ProtectedAudienceUtilities take_ownership(Handle h) noexcept;

    ProtectedAudienceUtilities clone() const noexcept;
    jsbind::Uint8Array encodeUtf8(const jsbind::USVString& input);
    jsbind::USVString decodeUtf8(const jsbind::Uint8Array& bytes);
};

