#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class RsaOtherPrimesInfo;

/// Dictionary type JsonWebKey
class JsonWebKey : public emlite::Val {
  explicit JsonWebKey(Handle h) noexcept;
public:
    static JsonWebKey take_ownership(Handle h) noexcept;
    explicit JsonWebKey(const emlite::Val &val) noexcept;
    JsonWebKey() noexcept;
    [[nodiscard]] JsonWebKey clone() const noexcept;
    /// Getter of the `kty` attribute.
    [[nodiscard]] jsbind::String kty() const;
    /// Setter of the `kty` attribute.
    void kty(const jsbind::String& value);
    /// Getter of the `use` attribute.
    [[nodiscard]] jsbind::String use() const;
    /// Setter of the `use` attribute.
    void use(const jsbind::String& value);
    /// Getter of the `key_ops` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::String> key_ops() const;
    /// Setter of the `key_ops` attribute.
    void key_ops(const jsbind::TypedArray<jsbind::String>& value);
    /// Getter of the `alg` attribute.
    [[nodiscard]] jsbind::String alg() const;
    /// Setter of the `alg` attribute.
    void alg(const jsbind::String& value);
    /// Getter of the `ext` attribute.
    [[nodiscard]] bool ext() const;
    /// Setter of the `ext` attribute.
    void ext(bool value);
    /// Getter of the `crv` attribute.
    [[nodiscard]] jsbind::String crv() const;
    /// Setter of the `crv` attribute.
    void crv(const jsbind::String& value);
    /// Getter of the `x` attribute.
    [[nodiscard]] jsbind::String x() const;
    /// Setter of the `x` attribute.
    void x(const jsbind::String& value);
    /// Getter of the `y` attribute.
    [[nodiscard]] jsbind::String y() const;
    /// Setter of the `y` attribute.
    void y(const jsbind::String& value);
    /// Getter of the `d` attribute.
    [[nodiscard]] jsbind::String d() const;
    /// Setter of the `d` attribute.
    void d(const jsbind::String& value);
    /// Getter of the `n` attribute.
    [[nodiscard]] jsbind::String n() const;
    /// Setter of the `n` attribute.
    void n(const jsbind::String& value);
    /// Getter of the `e` attribute.
    [[nodiscard]] jsbind::String e() const;
    /// Setter of the `e` attribute.
    void e(const jsbind::String& value);
    /// Getter of the `p` attribute.
    [[nodiscard]] jsbind::String p() const;
    /// Setter of the `p` attribute.
    void p(const jsbind::String& value);
    /// Getter of the `q` attribute.
    [[nodiscard]] jsbind::String q() const;
    /// Setter of the `q` attribute.
    void q(const jsbind::String& value);
    /// Getter of the `dp` attribute.
    [[nodiscard]] jsbind::String dp() const;
    /// Setter of the `dp` attribute.
    void dp(const jsbind::String& value);
    /// Getter of the `dq` attribute.
    [[nodiscard]] jsbind::String dq() const;
    /// Setter of the `dq` attribute.
    void dq(const jsbind::String& value);
    /// Getter of the `qi` attribute.
    [[nodiscard]] jsbind::String qi() const;
    /// Setter of the `qi` attribute.
    void qi(const jsbind::String& value);
    /// Getter of the `oth` attribute.
    [[nodiscard]] jsbind::TypedArray<RsaOtherPrimesInfo> oth() const;
    /// Setter of the `oth` attribute.
    void oth(const jsbind::TypedArray<RsaOtherPrimesInfo>& value);
    /// Getter of the `k` attribute.
    [[nodiscard]] jsbind::String k() const;
    /// Setter of the `k` attribute.
    void k(const jsbind::String& value);
};

} // namespace webbind