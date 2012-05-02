<?php
/**
 * @file
 * venue.features.inc
 */

/**
 * Implements hook_node_info().
 */
function venue_node_info() {
  $items = array(
    'venue' => array(
      'name' => t('Venue'),
      'base' => 'node_content',
      'description' => t('A place where events happen.'),
      'has_title' => '1',
      'title_label' => t('Venue Name'),
      'help' => '',
    ),
  );
  return $items;
}
