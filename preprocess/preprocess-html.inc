<?php

function slagbib_theme_alpha_preprocess_html(&$vars) {
  drupal_add_css(drupal_get_path('theme', 'slagbib_theme') . '/css/ie/ie.css',
    array(
      'browsers' => array('!IE' => FALSE),
      'preprocess' => FALSE,
      'weight' => '99',
      'group' => 2001,
      'basename' => 'ie',
    )
  );
  drupal_add_css(drupal_get_path('theme', 'slagbib_theme') . '/css/ie/ie7-8.css',
    array(
      'browsers' => array('IE' => 'lt IE 9', '!IE' => FALSE),
      'preprocess' => FALSE,
      'weight' => '99',
      'group' => 2001,
      'basename' => 'ie7-8',
    )
  );

  drupal_add_css(drupal_get_path('theme', 'slagbib_theme') . '/css/ie/ie7.css',
    array(
      'browsers' => array('IE' => 'IE 7', '!IE' => FALSE),
      'preprocess' => FALSE,
      'weight' => '99',
      'group' => 2001,
      'basename' => 'ie7',
    )
  );

  drupal_add_css(drupal_get_path('theme', 'slagbib_theme') . '/css/ie/ie8.css',
    array(
      'browsers' => array('IE' => 'IE 8', '!IE' => FALSE),
      'preprocess' => FALSE,
      'weight' => '99',
      'group' => 2001,
      'basename' => 'ie9',
    )
  );

  drupal_add_js(
    array(
     'pathToTheme' => '/' . drupal_get_path('theme', 'slagbib_theme'),
     'every_page' => TRUE,
     'scope' => 'header',
     'weight' => -19.95,
    ), 'setting'
  );

  drupal_add_js(drupal_get_path('theme', 'slagbib_theme') . '/js/webtrends.load.js',
    array(
      'scope' => 'footer',
    )
  );
}
