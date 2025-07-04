#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class WorkerGlobalScope;
class WorkerLocation;
class WorkerNavigator;
class FontFaceSet;
class Crypto;


class WorkerGlobalScope : public EventTarget {
    explicit WorkerGlobalScope(Handle h) noexcept;

public:
    explicit WorkerGlobalScope(const emlite::Val &val) noexcept;
    static WorkerGlobalScope take_ownership(Handle h) noexcept;

    WorkerGlobalScope clone() const noexcept;
    WorkerGlobalScope self() const;
    WorkerLocation location() const;
    WorkerNavigator navigator() const;
    jsbind::Undefined importScripts(const jsbind::Any& urls);
    jsbind::Any onerror() const;
    void onerror(const jsbind::Any& value);
    jsbind::Any onlanguagechange() const;
    void onlanguagechange(const jsbind::Any& value);
    jsbind::Any onoffline() const;
    void onoffline(const jsbind::Any& value);
    jsbind::Any ononline() const;
    void ononline(const jsbind::Any& value);
    jsbind::Any onrejectionhandled() const;
    void onrejectionhandled(const jsbind::Any& value);
    jsbind::Any onunhandledrejection() const;
    void onunhandledrejection(const jsbind::Any& value);
    FontFaceSet fonts() const;
    Crypto crypto() const;
};

