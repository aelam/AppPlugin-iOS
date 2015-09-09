em.init(function(){

});

em.ready(function() {

});


em.error(function(res) {

});

em.onMenuShareTimeline({
    title: '', // 分享标题
    link: '', // 分享链接
    imgUrl: '', // 分享图标
    success: function () {
        // 用户确认分享后执行的回调函数
    },
    cancel: function () {
        // 用户取消分享后执行的回调函数
    }
});

em.shareTimeline({
    title: '', // 分享标题
    link: '', // 分享链接
    imgUrl: '', // 分享图标
    success: function () {
        // 用户确认分享后执行的回调函数
    },
    cancel: function () {
        // 用户取消分享后执行的回调函数
    }
});

em.showNavigationBar(function(){

});

em.setNavigationBarColor();

em.getNetworkType({
    success: function (res) {
        var networkType = res.networkType; // 返回网络类型2g，3g，4g，wifi
    }
});


em.getThemeType({
    success: function (res) {
        var themeType = res.themeType; // 返回网络类型2g，3g，4g，wifi
    }
});
