#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class NavigationPreloadState;


class NavigationPreloadState : public emlite::Val {
  explicit NavigationPreloadState(Handle h) noexcept;
public:
    static NavigationPreloadState take_ownership(Handle h) noexcept;
    explicit NavigationPreloadState(const emlite::Val &val) noexcept;
    NavigationPreloadState() noexcept;
    NavigationPreloadState clone() const noexcept;
    bool enabled() const;
    void enabled(bool value);
    jsbind::ByteString headerValue() const;
    void headerValue(const jsbind::ByteString& value);
};

class NavigationPreloadManager : public emlite::Val {
    explicit NavigationPreloadManager(Handle h) noexcept;

public:
    explicit NavigationPreloadManager(const emlite::Val &val) noexcept;
    static NavigationPreloadManager take_ownership(Handle h) noexcept;

    NavigationPreloadManager clone() const noexcept;
    jsbind::Promise enable();
    jsbind::Promise disable();
    jsbind::Promise setHeaderValue(const jsbind::ByteString& value);
    jsbind::Promise getState();
};

