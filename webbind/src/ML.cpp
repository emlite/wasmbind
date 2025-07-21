#include <webbind/ML.hpp>
#include <webbind/MLContext.hpp>
#include <webbind/GPUDevice.hpp>


ML ML::take_ownership(Handle h) noexcept {
        return ML(h);
    }
ML ML::clone() const noexcept { return *this; }
ML::ML(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ML::ML(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Promise<MLContext> ML::createContext(const GPUDevice& gpuDevice) {
    return emlite::Val::call("createContext", gpuDevice).as<jsbind::Promise<MLContext>>();
}

