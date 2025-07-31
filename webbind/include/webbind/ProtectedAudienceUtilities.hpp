#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The ProtectedAudienceUtilities class.
/// [`ProtectedAudienceUtilities`](https://developer.mozilla.org/en-US/docs/Web/API/ProtectedAudienceUtilities)
class ProtectedAudienceUtilities : public emlite::Val {
    explicit ProtectedAudienceUtilities(Handle h) noexcept;

public:
    explicit ProtectedAudienceUtilities(const emlite::Val &val) noexcept;
    static ProtectedAudienceUtilities take_ownership(Handle h) noexcept;

    [[nodiscard]] ProtectedAudienceUtilities clone() const noexcept;
    /// The encodeUtf8 method.
    /// [`ProtectedAudienceUtilities.encodeUtf8`](https://developer.mozilla.org/en-US/docs/Web/API/ProtectedAudienceUtilities/encodeUtf8)
    jsbind::Uint8Array encodeUtf8(const jsbind::String& input);
    /// The decodeUtf8 method.
    /// [`ProtectedAudienceUtilities.decodeUtf8`](https://developer.mozilla.org/en-US/docs/Web/API/ProtectedAudienceUtilities/decodeUtf8)
    jsbind::String decodeUtf8(const jsbind::Uint8Array& bytes);
};

