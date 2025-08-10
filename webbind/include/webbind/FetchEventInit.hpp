#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ExtendableEventInit.hpp"

namespace webbind {

class Request;

/// Dictionary type FetchEventInit
class FetchEventInit : public ExtendableEventInit {
  explicit FetchEventInit(Handle h) noexcept;
public:
    static FetchEventInit take_ownership(Handle h) noexcept;
    explicit FetchEventInit(const emlite::Val &val) noexcept;
    FetchEventInit() noexcept;
    [[nodiscard]] FetchEventInit clone() const noexcept;
    /// Getter of the `request` attribute.
    [[nodiscard]] Request request() const;
    /// Setter of the `request` attribute.
    void request(const Request& value);
    /// Getter of the `preloadResponse` attribute.
    [[nodiscard]] jsbind::Promise<jsbind::Any> preloadResponse() const;
    /// Setter of the `preloadResponse` attribute.
    void preloadResponse(const jsbind::Promise<jsbind::Any>& value);
    /// Getter of the `clientId` attribute.
    [[nodiscard]] jsbind::String clientId() const;
    /// Setter of the `clientId` attribute.
    void clientId(const jsbind::String& value);
    /// Getter of the `resultingClientId` attribute.
    [[nodiscard]] jsbind::String resultingClientId() const;
    /// Setter of the `resultingClientId` attribute.
    void resultingClientId(const jsbind::String& value);
    /// Getter of the `replacesClientId` attribute.
    [[nodiscard]] jsbind::String replacesClientId() const;
    /// Setter of the `replacesClientId` attribute.
    void replacesClientId(const jsbind::String& value);
    /// Getter of the `handled` attribute.
    [[nodiscard]] jsbind::Promise<jsbind::Undefined> handled() const;
    /// Setter of the `handled` attribute.
    void handled(const jsbind::Promise<jsbind::Undefined>& value);
};

} // namespace webbind