#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Credential.hpp"
#include "enums.hpp"


/// The OTPCredential class.
/// [`OTPCredential`](https://developer.mozilla.org/en-US/docs/Web/API/OTPCredential)
class OTPCredential : public Credential {
    explicit OTPCredential(Handle h) noexcept;

public:
    explicit OTPCredential(const emlite::Val &val) noexcept;
    static OTPCredential take_ownership(Handle h) noexcept;

    [[nodiscard]] OTPCredential clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `code` attribute.
    /// [`OTPCredential.code`](https://developer.mozilla.org/en-US/docs/Web/API/OTPCredential/code)
    [[nodiscard]] jsbind::String code() const;
};

